/**
 * Numerics.cpp
 */
#ifndef NUMERICS
#define NUMERICS
#include <sstream>
#include <string>
using std::stringstream;
using std::string;
/**
 * Convenience class for enabling easy
 * conversions between strings and primitive types.
 *
 * This class is not meant to support non-primitive types,
 * but it should if target class Type has istream and ostream
 * operators overloaded.
 */
namespace Numerics{
	template<class T>
	class Numerical{

		private:
			T number;
		public:
			Numerical(T value = 0) : number(value){}
			Numerical(const string& arg){
				const_cast<Numerical&>(*this)(arg);
			}
			/**
			 * Attempts to assign the argument value to the value
			 * of this Object's type.
			 * If the value is invalid, nothing happens.
			 */
			string operator()(const string& arg){
				stringstream ss (stringstream::in | stringstream::out);
				try{
					ss << arg;
					ss >> number;
				}catch(...){
					// currently unsupported
				}
				return ss.str();
			}
			/**
			 * Attempts to assign the argument value to the value of
			 * this Object's type.
			 */
			T operator()(T value){
				return (number = value);
			}
			/**
			 * Returns a string representation of this Object's number
			 */
			string getString(){
				stringstream ss (stringstream::in | stringstream::out);
				ss << number;
				return ss.str();
			}
			/**
			 * Returns a copy of this Object's number
			 */
			T getValue(){
				return number;
			}
			/**
			 * Extraction operator used to return the underlying value
			 * during operations assosciated with primitive types.
			 */
			operator T& (){
				return number;
			}
			/**
			 * const version of the above operator. Returns a copy
			 * of this Object's number.
			 */
			operator T () const{
				return number;
			}
	};
	/* Some meaningful typedefs for Numerical types */
	typedef Numerical<short> Short;
	typedef Numerical<unsigned short> U_Short;
	typedef Numerical<int> Integer;
	typedef Numerical<unsigned int> U_Integer;
	typedef Numerical<double> Double;
	typedef Numerical<float> Float;
	typedef Numerical<char> Byte;
	typedef Numerical<unsigned char> U_Byte;
	typedef Numerical<wchar_t> Wide_Byte;
	typedef Numerical<long int> Long;
	typedef Numerical<unsigned long int> U_Long;
	/* For non-standard types, like __int8, __int16, __int32, and __int64 */
	#ifdef ALLOW_NONSTANDARD_PRIMITIVE_TYPES
		#if (ALLOW_NONSTANDARD_PRIMITIVE_TYPES == 0x01)
			typedef Numerical < __int8 > __Int8;
			typedef Numerical < unsigned __int8 > U___Int8;
			typedef Numerical < __int16 > __Int16;
			typedef Numerical < unsigned __int16 > U___Int16;
			typedef Numerical < __int32 > __Int32;
			typedef Numerical < unsigned __int32 > U___Int32;
			typedef Numerical < __int64 > __Int64;
			typedef Numerical < unsigned __int64 > U___Int64;
		#endif
	#endif
}
#endif
////////////////////////////////////
/**
 * EquationSolver.h
 */
#ifndef EQUATION_SOLVER_H
#define EQUATION_SOLVER_H
#include <string>
#include <vector>
using std::string;
using std::vector;
namespace EquationHelper{
	class EquationSolver{
		private:
			EquationSolver();
			static string doOperation(const string&, char, const string&);
			static void correctedString(string&);
			static void removeSpaces(string&);
			static string parse(const string&);
			static bool isSolvable(const string&);
			static void calculate(vector<string>&, vector<char>&, const string&);
		public:
			static string solve(const string&, int = 50);
	};
}

#endif
////////////////////////////////
/**
 * EquationSolver.cpp
 */
#ifdef EQUATION_SOLVER_H
#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace EquationHelper;
using namespace Numerics;
using std::size_t;
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::ios;
typedef EquationSolver ES;
/**
 * Private constructor - does nothing.
 */
ES::EquationSolver(){}
/**
 * Performs the specified operation against the
 * argument strings. The operation is dependant on
 * the value of op.
 */
string ES::doOperation(const string& lhs, char op, const string& rhs){

	Double bdLhs = lhs;
	Double bdRhs = rhs;
	Double temp;
	switch(op){
		case '^':
			temp( pow( bdLhs, bdRhs ) );
			break;
		case '*':
			temp( bdLhs * bdRhs );
			break;
		case '/':
			temp( bdLhs / bdRhs );
			break;
		case '+':
			temp( bdLhs + bdRhs );
			break;
		case '%':
			temp( fmod(bdLhs, bdRhs) );
			break;
	}
	return temp.getString();
}
/**
 * Returns the string with its enclosing paranthesis
 * stripped from it.
 */
void ES::correctedString(string& arg){

	size_t pos1 = arg.find_first_of("(");
	size_t pos2 = arg.find_last_of(")");
	if(pos1 >= 0 && pos1 < arg.length() && pos2 >= 0 && pos2 <= arg.length())
		arg[pos1] = arg[pos2] = ' ';
}
/**
 * Remove spaces from the argument string.
 */
void ES::removeSpaces(string& argu){
	string temp = "";
	for(size_t i = 0; i < argu.length(); i++)
		if(argu[i] != ' ')
			temp += argu[i];
	argu = temp;
}
/**
 * The brains of the program.
 * Solves expressions by using recursion for complex expressions.
 */
string ES::parse(const string& param){

	string expression = param;
	correctedString(expression);
	removeSpaces(expression);
	string finalExpression = "";
	bool operatorEncountered = true;
	for(size_t i = 0; i < expression.length(); i++){
		if(expression[i] == '('){
			string placeHolder = "(";
			int valuesCounted = 1;
			operatorEncountered = false;
			for(size_t j = i + 1; valuesCounted != 0; j++){
				if(expression[j] == '(')
					valuesCounted++;
				else if(expression[j] == ')')
					valuesCounted--;
				placeHolder += expression[j];
			}
			string evaluatedString = parse(placeHolder);
			finalExpression += evaluatedString;
			i += (placeHolder.length() - 1);
		}else{
			if(expression[i] == '-' && operatorEncountered == false)
				finalExpression += '+';
			finalExpression += expression[i];
			if((expression[i] == '+'
			|| expression[i] == '/'
			|| expression[i] == '^'
			|| expression[i] == '*'
			|| expression[i] == '%'
			|| expression[i] == '-'))
				operatorEncountered = true;
			else if(expression[i] != ' ')
				operatorEncountered = false;
		}
	}
	removeSpaces(finalExpression);
	string perfectExpression = "";
	for(size_t i = 0; i < finalExpression.length(); i++){
		if((i + 1) < finalExpression.length())
			if(finalExpression[i] == '-' && finalExpression[i + 1] == '-')
				i += 2;
		perfectExpression += finalExpression[i];
	}
	finalExpression = perfectExpression;
	vector<string> totalNumbers;
	vector<char> totalOperations;
	cout << finalExpression << endl;
	for(size_t i = 0; i < finalExpression.length(); i++){
		if(finalExpression[i] >= '0' && finalExpression[i] <= '9'
		|| finalExpression[i] == '-' || finalExpression[i] == '.'){
			string temp = "";	//
			for(size_t j = i; j < finalExpression.length(); j++){
				if(finalExpression[j] >= '0' && finalExpression[j] <= '9'
				|| finalExpression[j] == '-' || finalExpression[j] == '.'){
						temp += finalExpression[j];
				}else break;
			}
			totalNumbers.push_back(temp);
			i += temp.length() == 0 ? 0 : (temp.length() - 1);
		}else if(finalExpression[i] == '*'
			  || finalExpression[i] == '/'
			  || finalExpression[i] == '^'
			  || finalExpression[i] == '+'
			  || finalExpression[i] == '%'
			  ){
			totalOperations.push_back(finalExpression[i]);
		}
	}
	ES::calculate(totalNumbers, totalOperations, "^");
	ES::calculate(totalNumbers, totalOperations, "*/%");
	ES::calculate(totalNumbers, totalOperations, "+");
	return totalNumbers[0];
}
/**
 * Calculates the numbers in the first vector using the operands in the 2nd vector,
 * based on the expressions allowed which are determined by the string argument.
 */
void ES::calculate(vector<string>& totalNumbers, vector<char>& totalOperations,
				   const string& arg){
	for(int i = 0; i < static_cast<int>(totalOperations.size()); i++){
		if( arg.find(totalOperations[i]) != arg.npos){
			totalNumbers[i] = doOperation(totalNumbers[i], totalOperations[i], totalNumbers[i + 1]);

			size_t oldNumberLength = totalNumbers.size();
			size_t oldOperatorLength = totalOperations.size();
			size_t nextNumberLength = oldNumberLength - 1;
			size_t nextOperatorLength = oldOperatorLength - 1;
			size_t sCount = 0;
			size_t oCount = 0;
			vector<string> temp1 ( nextNumberLength );
			vector<char> temp2 ( nextOperatorLength );

			for(size_t j = 0; j < oldNumberLength; j++){
				if(j != static_cast<int>(i + 1)){
					temp1[sCount++] = totalNumbers[j];
				}
				if(j != i && j < oldOperatorLength){
					temp2[oCount++] = totalOperations[j];
				}
			}
			totalNumbers = temp1;
			totalOperations = temp2;
			i--;
		}
	}
}
/**
 * Returns true if the equation is solvable (not really),
 * returns false otherwise.
 *
 * This function is truly a misnomer, because more restrictions
 * should be put in place.
 */
bool ES::isSolvable(const string& eq){

	int paranthesisCount = 0;
	for(size_t i = 0; i < eq.length(); i++){
		if(eq[i] == '(')
			paranthesisCount++;
		else if(eq[i] == ')')
			paranthesisCount--;
		if(paranthesisCount < 0)
			return false;
	}
	return paranthesisCount == 0;
}
/**
 * An attempt to solve a string-expression, given
 * a precision value.
 */
string ES::solve(const string& eq, int prec){
	if(isSolvable(eq)){
		stringstream ss (stringstream::in | stringstream::out);
		cout << eq << endl;
		string value;
		value += '(';
		value += eq;
		value += ')';

		//ss.setf(0, std::ios::floatfield);
		ss.precision(12);
		ss << parse(value);
		return ss.str();
	}else return "";
}
#endif
////////////////////////////////////
/**
 * DriverProgram.cpp
 */
/****************************************
 * @Author: Mark Alexander Edwards Jr.
 *
 * This program uses a utility class to solve
 * complex equations represented by string
 * expressions
 ****************************************/

 
 