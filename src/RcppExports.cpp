// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// project_to_curve
List project_to_curve(NumericMatrix x, NumericMatrix s, Nullable<IntegerVector> ord, double stretch);
RcppExport SEXP _princurve_project_to_curve(SEXP xSEXP, SEXP sSEXP, SEXP ordSEXP, SEXP stretchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s(sSEXP);
    Rcpp::traits::input_parameter< Nullable<IntegerVector> >::type ord(ordSEXP);
    Rcpp::traits::input_parameter< double >::type stretch(stretchSEXP);
    rcpp_result_gen = Rcpp::wrap(project_to_curve(x, s, ord, stretch));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_princurve_project_to_curve", (DL_FUNC) &_princurve_project_to_curve, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_princurve(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}