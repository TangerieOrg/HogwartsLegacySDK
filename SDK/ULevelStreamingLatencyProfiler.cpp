#include "ULevelStreamingLatencyProfiler.hpp"
#include "UObject.hpp"
ULevelStreamingLatencyProfiler* ULevelStreamingLatencyProfiler::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LevelStreamingLatencyProfiler");
    return (ULevelStreamingLatencyProfiler*)res;
}
