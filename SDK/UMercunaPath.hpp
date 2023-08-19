#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMercunaPath : public UObject {
public:
    char pad_28[0x18];
    static UMercunaPath* StaticClass();
    bool IsValid();
    bool IsReady();
    bool IsPartial();
    FVector GetPoint(int32_t I);
    float GetPathLength();
    int32_t GetNumPoints();
    void GetDebugInfo(int32_t& nodesUsed, bool& bOutOfNodes, float& queryTime);
}; // Size: 0x40
#pragma pack(pop)
