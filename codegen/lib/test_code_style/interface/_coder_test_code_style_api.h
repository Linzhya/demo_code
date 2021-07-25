/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_test_code_style_api.h
 *
 * MATLAB Coder version            : 5.0
 * C/C++ source code generated on  : 26-Sep-2020 15:41:52
 */

#ifndef _CODER_TEST_CODE_STYLE_API_H
#define _CODER_TEST_CODE_STYLE_API_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern real_T test_code_style(real_T x);
extern void test_code_style_api(const mxArray * const prhs[1], int32_T nlhs,
  const mxArray *plhs[1]);
extern void test_code_style_atexit(void);
extern void test_code_style_initialize(void);
extern void test_code_style_terminate(void);
extern void test_code_style_xil_shutdown(void);
extern void test_code_style_xil_terminate(void);

#endif

/*
 * File trailer for _coder_test_code_style_api.h
 *
 * [EOF]
 */
