#pragma once
#include <cstdint>
#include "UMoviePipelineDeferredPassBase.hpp"
#pragma pack(push, 1)
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase {
public:
    static UMoviePipelineDeferredPass_PathTracer* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
