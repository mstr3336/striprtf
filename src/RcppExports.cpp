// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// strip_helper
std::string strip_helper(CharacterMatrix match_list);
RcppExport SEXP striprtf_strip_helper(SEXP match_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterMatrix >::type match_list(match_listSEXP);
    rcpp_result_gen = Rcpp::wrap(strip_helper(match_list));
    return rcpp_result_gen;
END_RCPP
}
