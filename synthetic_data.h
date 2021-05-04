//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: synthetic_data.h
//
// Code generated for Simulink model 'synthetic_data'.
//
// Model version                  : 1.11
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Tue May  4 13:01:33 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_synthetic_data_h_
#define RTW_HEADER_synthetic_data_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "synthetic_data_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

// Block signals (default storage)
struct B_synthetic_data_T {
  SL_Bus_synthetic_data_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  real_T FromWs[4];                    // '<S9>/FromWs'
};

// Block states (default storage) for system '<Root>'
struct DW_synthetic_data_T {
  ros_slroscpp_internal_block_P_T obj; // '<S8>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_e;// '<S7>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_en;// '<S6>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_h;// '<S5>/SinkBlock'
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      // '<S9>/FromWs'

  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      // '<S9>/FromWs'
};

// Parameters (default storage)
struct P_synthetic_data_T_ {
  SL_Bus_synthetic_data_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                              //  Referenced by: '<S1>/Constant'

  SL_Bus_synthetic_data_geometry_msgs_Twist Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                //  Referenced by: '<S3>/Constant'

  SL_Bus_synthetic_data_std_msgs_Float64 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                             //  Referenced by: '<S2>/Constant'

  SL_Bus_synthetic_data_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                             //  Referenced by: '<S4>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_synthetic_data_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_synthetic_data_T synthetic_data_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_synthetic_data_T synthetic_data_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_synthetic_data_T synthetic_data_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void synthetic_data_initialize(void);
  extern void synthetic_data_step(void);
  extern void synthetic_data_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_synthetic_data_T *const synthetic_data_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'synthetic_data'
//  '<S1>'   : 'synthetic_data/Blank Message'
//  '<S2>'   : 'synthetic_data/Blank Message1'
//  '<S3>'   : 'synthetic_data/Blank Message2'
//  '<S4>'   : 'synthetic_data/Blank Message3'
//  '<S5>'   : 'synthetic_data/Publish'
//  '<S6>'   : 'synthetic_data/Publish1'
//  '<S7>'   : 'synthetic_data/Publish2'
//  '<S8>'   : 'synthetic_data/Publish3'
//  '<S9>'   : 'synthetic_data/Signal Builder'

#endif                                 // RTW_HEADER_synthetic_data_h_

//
// File trailer for generated code.
//
// [EOF]
//
