// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// muQmlCpp
arma::vec muQmlCpp(Rcpp::List m, int t);
RcppExport SEXP _modsem_muQmlCpp(SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(muQmlCpp(m, t));
    return rcpp_result_gen;
END_RCPP
}
// sigmaQmlCpp
arma::vec sigmaQmlCpp(Rcpp::List m, int t);
RcppExport SEXP _modsem_sigmaQmlCpp(SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(sigmaQmlCpp(m, t));
    return rcpp_result_gen;
END_RCPP
}
// dnormCpp
arma::vec dnormCpp(const arma::vec& x, const arma::vec& mu, const arma::vec& sigma);
RcppExport SEXP _modsem_dnormCpp(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(dnormCpp(x, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// varZCpp
double varZCpp(arma::mat Omega, arma::mat Sigma1);
RcppExport SEXP _modsem_varZCpp(SEXP OmegaSEXP, SEXP Sigma1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma1(Sigma1SEXP);
    rcpp_result_gen = Rcpp::wrap(varZCpp(Omega, Sigma1));
    return rcpp_result_gen;
END_RCPP
}
// muLmsCpp
arma::vec muLmsCpp(Rcpp::List model, arma::vec z);
RcppExport SEXP _modsem_muLmsCpp(SEXP modelSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(muLmsCpp(model, z));
    return rcpp_result_gen;
END_RCPP
}
// sigmaLmsCpp
arma::mat sigmaLmsCpp(Rcpp::List model, arma::vec z);
RcppExport SEXP _modsem_sigmaLmsCpp(SEXP modelSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(sigmaLmsCpp(model, z));
    return rcpp_result_gen;
END_RCPP
}
// zToMatrix
arma::mat zToMatrix(arma::vec z, int numEtas);
RcppExport SEXP _modsem_zToMatrix(SEXP zSEXP, SEXP numEtasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type numEtas(numEtasSEXP);
    rcpp_result_gen = Rcpp::wrap(zToMatrix(z, numEtas));
    return rcpp_result_gen;
END_RCPP
}
// multiplyIndicatorsCpp
NumericVector multiplyIndicatorsCpp(DataFrame df);
RcppExport SEXP _modsem_multiplyIndicatorsCpp(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(multiplyIndicatorsCpp(df));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_modsem_muQmlCpp", (DL_FUNC) &_modsem_muQmlCpp, 2},
    {"_modsem_sigmaQmlCpp", (DL_FUNC) &_modsem_sigmaQmlCpp, 2},
    {"_modsem_dnormCpp", (DL_FUNC) &_modsem_dnormCpp, 3},
    {"_modsem_varZCpp", (DL_FUNC) &_modsem_varZCpp, 2},
    {"_modsem_muLmsCpp", (DL_FUNC) &_modsem_muLmsCpp, 2},
    {"_modsem_sigmaLmsCpp", (DL_FUNC) &_modsem_sigmaLmsCpp, 2},
    {"_modsem_zToMatrix", (DL_FUNC) &_modsem_zToMatrix, 2},
    {"_modsem_multiplyIndicatorsCpp", (DL_FUNC) &_modsem_multiplyIndicatorsCpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_modsem(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
