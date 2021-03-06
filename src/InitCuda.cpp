/**
 * Copyright 2014 Facebook
 * @author Tudor Bosman (tudorb@fb.com)
 */

#include <lua.hpp>

#ifdef FB_INTERNAL
#else
#define LUAOPEN(x) luaopen_fbcunn_cuda_ext(x)
#endif

namespace facebook { namespace deeplearning { namespace torch {

void initCrossMapNormalizationCuda(lua_State* L);
void initLocallyConnectedCuda(lua_State* L);
void initLookupTableGPUCuda(lua_State* L);
void initHSMCuda(lua_State* L);
void initTemporalConvolutionFB(lua_State *L);
void initTemporalKMaxPoolingCuda(lua_State* L);
void initOneBitQuantizationCuda(lua_State* L);
void initSparseNLLCriterionCuda(lua_State* L);
void initTemporalConvolutionTBCCuda(lua_State* L);
void initFeatureLPPoolingCuda(lua_State* L);
void initCuBLASWrapper(lua_State *L);
// void initFFTWrapper(lua_State *L);
// void initSpatialConvolutionCuFFT(lua_State *L);
void initWeightedLookupTableCuda(lua_State *L);

}}}  // namespace

using namespace facebook::deeplearning::torch;

extern "C" int LUAOPEN(lua_State* L) {
  initCrossMapNormalizationCuda(L);
  initLocallyConnectedCuda(L);
  initLookupTableGPUCuda(L);
  initTemporalConvolutionFB(L);
  initTemporalKMaxPoolingCuda(L);
  initHSMCuda(L);
  initOneBitQuantizationCuda(L);
  initSparseNLLCriterionCuda(L);
  initTemporalConvolutionTBCCuda(L);
  initFeatureLPPoolingCuda(L);
  initCuBLASWrapper(L);
  // initFFTWrapper(L);
  // initSpatialConvolutionCuFFT(L);
  initWeightedLookupTableCuda(L);

  return 0;
}
