//
// Started by Tom on 2/9/18.
//

#include "bigint.h"


void bigint::strip_zeros() {

}

/* Constructors
 * 
 * */

bigint::bigint() {

}

bigint::bigint(const std::vector<vec_bin> &that) {

}

bigint::bigint(unsigned long long i) {

}

bigint::bigint(std::string str) {

}

bigint::bigint(std::ifstream &infile) {

}

bigint::bigint(const bigint &that) {

}


/* Number Access
 * 
 * */
const std::vector<vec_bin> &bigint::getNumber() const {

}

vec_bin bigint::operator[](size_t index) const {

}


/** Comparators
 *
 * */
bool bigint::operator==(const bigint &that) const {

}

bool bigint::operator!=(const bigint &that) const {

}

bool bigint::operator<(const bigint &that) const {

}

bool bigint::operator<=(const bigint &that) const {

}

bool bigint::operator>(const bigint &that) const {

}

bool bigint::operator>=(const bigint &that) const {

}


/** Addition
 *
 * */

bigint bigint::add(const bigint &that) const {

}

bigint bigint::operator+(const bigint &that) const {

}

bigint &bigint::operator+=(const bigint &that) {

}

bigint &bigint::operator++() {

}

bigint bigint::operator++(int) {

}


/** Subtraction
 *
 * */

bigint bigint::subtract(const bigint &that) const {

}

bigint bigint::operator-(const bigint &that) const {

}

bigint &bigint::operator-=(const bigint &that) {

}

bigint &bigint::operator--() {

}

bigint bigint::operator--(int) {

}


/** Multiplication
 *
 * */

bigint bigint::multiply(const bigint &that) const {

}

bigint bigint::operator*(const bigint &that) const {

}

bigint &bigint::operator*=(const bigint &that) {

}


/** Division
 *
 * */

bigint bigint::divide(const bigint &that) const {

}

bigint bigint::operator/(const bigint &that) const {

}

bigint &bigint::operator/=(const bigint &that) {

}


/** Modulo
 *
 * */

bigint bigint::mod(const bigint &that) const {

}

bigint bigint::operator%(const bigint &that) const {

}

bigint &bigint::operator%=(const bigint &that) {

}


/** Power
 *
 * */

bigint bigint::pow(unsigned long long n) {

}


/** Display methods
 *
 * */

std::ostream &operator<<(std::ostream &os, const bigint &bigint1) {

}

std::string bigint::to_string(bool commas) const {

}

std::string bigint::scientific(unsigned int decimal_points) const {

}

void bigint::to_file(std::ofstream &outfile, unsigned int wrap) {

}
