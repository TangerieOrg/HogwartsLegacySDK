#include "UObject.hpp"
#include "UStreamingComplexityToolContext.hpp"
UStreamingComplexityToolContext* UStreamingComplexityToolContext::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamingComplexityToolRuntime.StreamingComplexityToolContext");
    return (UStreamingComplexityToolContext*)res;
}
