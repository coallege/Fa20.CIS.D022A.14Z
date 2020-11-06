/*
Write a program that will input miles traveled and hours spent in travel.
The program will determine miles per hour.
This calculation must be done in a function other than main;
however, main will print the calculation.
The function will thus have 3 parameters:
miles, hours, and milesPerHour.
Output is fixed with 2 decimal point precision.
*/

#include <ios>
#include <iomanip>
#include <iostream>
#define number long double
#define say std::cout <<
#define entry int main(
#define def(n) void n(
#define var(n, t) t n
#define ask std::cin
#define divided /
#define for >>
#define next ,
#define call (
#define done )
#define do ){
#define end }
#define ref &
#define to =
#define ok ;
#define with
#define set
#define by

using namespace std;

def(calc)
var(miles, number) next
var(hours, number) next
var(mph, number ref)
do
	set mph to miles divided by hours ok
end

entry do
	say setprecision call with 2 done ok
	say fixed ok

	var(milesTraveled, number) ok
	say "Please input miles traveled\n> " ok
	ask for milesTraveled ok

	var(hoursTraveled, number) ok
	say "Please input hours traveled\n> " ok
	ask for hoursTraveled ok

	var(milesPerHour, number) to -1 ok
	calc call with
		milesTraveled next
		hoursTraveled next
		milesPerHour
	done ok

	say "Your speed is " ok
	say milesPerHour ok
	say " miles per hour.\n" ok
end
