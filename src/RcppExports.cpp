// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// test_basic
Rcpp::List test_basic(std::string filename, std::string outfilename);
RcppExport SEXP facilitation_test_basic(SEXP filenameSEXP, SEXP outfilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfilename(outfilenameSEXP);
    __result = Rcpp::wrap(test_basic(filename, outfilename));
    return __result;
END_RCPP
}
// test_parameter
Rcpp::List test_parameter(Rcpp::NumericVector times, int num_stages, Rcpp::NumericVector parameters, double f, Rcpp::IntegerVector init, double w, double h);
RcppExport SEXP facilitation_test_parameter(SEXP timesSEXP, SEXP num_stagesSEXP, SEXP parametersSEXP, SEXP fSEXP, SEXP initSEXP, SEXP wSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< int >::type num_stages(num_stagesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type init(initSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    __result = Rcpp::wrap(test_parameter(times, num_stages, parameters, f, init, w, h));
    return __result;
END_RCPP
}
// Random
double Random(double max);
RcppExport SEXP facilitation_Random(SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    __result = Rcpp::wrap(Random(max));
    return __result;
END_RCPP
}
// Bernoulli
bool Bernoulli(double p);
RcppExport SEXP facilitation_Bernoulli(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    __result = Rcpp::wrap(Bernoulli(p));
    return __result;
END_RCPP
}
// Exponential
double Exponential(double r);
RcppExport SEXP facilitation_Exponential(SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    __result = Rcpp::wrap(Exponential(r));
    return __result;
END_RCPP
}
// RandomSign
short RandomSign();
RcppExport SEXP facilitation_RandomSign() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(RandomSign());
    return __result;
END_RCPP
}
