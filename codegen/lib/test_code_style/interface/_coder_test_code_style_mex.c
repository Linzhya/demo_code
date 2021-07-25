/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_test_code_style_mex.c
 *
 * MATLAB Coder version            : 5.0
 * C/C++ source code generated on  : 26-Sep-2020 15:41:52
 */

/* Include Files */
#include "_coder_test_code_style_mex.h"
#include "_coder_test_code_style_api.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void test_code_style_mexFunction(int32_T nlhs, mxArray *
  plhs[1], int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
void test_code_style_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[1])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        15, "test_code_style");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "test_code_style");
  }

  /* Call the function. */
  test_code_style_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[]
 *                int32_T nrhs
 *                const mxArray *prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&test_code_style_atexit);

  /* Module initialization. */
  test_code_style_initialize();

  /* Dispatch the entry-point. */
  test_code_style_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  test_code_style_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_test_code_style_mex.c
 *
 * [EOF]
 */
