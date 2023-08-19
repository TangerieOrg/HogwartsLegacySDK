#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UInstancedStaticMeshComponent;
#pragma pack(push, 1)
class UBP_SplineToolGeneratorInterface_C : public UInterface {
public:
    static UBP_SplineToolGeneratorInterface_C* StaticClass();
    void RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success);
}; // Size: 0x28
#pragma pack(pop)
