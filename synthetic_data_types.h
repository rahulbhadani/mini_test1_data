//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: synthetic_data_types.h
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
#ifndef RTW_HEADER_synthetic_data_types_h_
#define RTW_HEADER_synthetic_data_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_synthetic_data_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_synthetic_data_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_synthetic_data_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_synthetic_data_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_synthetic_data_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
struct SL_Bus_synthetic_data_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_synthetic_data_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_synthetic_data_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_synthetic_data_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_synthetic_data_std_msgs_Float64_

// MsgType=std_msgs/Float64
struct SL_Bus_synthetic_data_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

// Parameters (default storage)
typedef struct P_synthetic_data_T_ P_synthetic_data_T;

// Forward declaration for rtModel
typedef struct tag_RTM_synthetic_data_T RT_MODEL_synthetic_data_T;

#endif                                 // RTW_HEADER_synthetic_data_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
