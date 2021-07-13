// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// tree_search_rcpp
Rcpp::List tree_search_rcpp(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Y, int depth, int split_step, int min_node_size, bool exact_search, int hybrid_complete_split_depth, int hybrid_chop_depth, int hybrid_repeat_splits);
RcppExport SEXP _policytree_tree_search_rcpp(SEXP XSEXP, SEXP YSEXP, SEXP depthSEXP, SEXP split_stepSEXP, SEXP min_node_sizeSEXP, SEXP exact_searchSEXP, SEXP hybrid_complete_split_depthSEXP, SEXP hybrid_chop_depthSEXP, SEXP hybrid_repeat_splitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type split_step(split_stepSEXP);
    Rcpp::traits::input_parameter< int >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type exact_search(exact_searchSEXP);
    Rcpp::traits::input_parameter< int >::type hybrid_complete_split_depth(hybrid_complete_split_depthSEXP);
    Rcpp::traits::input_parameter< int >::type hybrid_chop_depth(hybrid_chop_depthSEXP);
    Rcpp::traits::input_parameter< int >::type hybrid_repeat_splits(hybrid_repeat_splitsSEXP);
    rcpp_result_gen = Rcpp::wrap(tree_search_rcpp(X, Y, depth, split_step, min_node_size, exact_search, hybrid_complete_split_depth, hybrid_chop_depth, hybrid_repeat_splits));
    return rcpp_result_gen;
END_RCPP
}
// tree_search_rcpp_predict
Rcpp::NumericMatrix tree_search_rcpp_predict(const Rcpp::NumericMatrix& tree_array, const Rcpp::NumericMatrix& X);
RcppExport SEXP _policytree_tree_search_rcpp_predict(SEXP tree_arraySEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type tree_array(tree_arraySEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(tree_search_rcpp_predict(tree_array, X));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_policytree_tree_search_rcpp", (DL_FUNC) &_policytree_tree_search_rcpp, 9},
    {"_policytree_tree_search_rcpp_predict", (DL_FUNC) &_policytree_tree_search_rcpp_predict, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_policytree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
