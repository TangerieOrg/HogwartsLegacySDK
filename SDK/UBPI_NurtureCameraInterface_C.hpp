#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBPI_NurtureCameraInterface_C : public UInterface {
public:
    static UBPI_NurtureCameraInterface_C* StaticClass();
    void OnDisableCamera(bool ReturnToPlayer);
    void OnEnableCamera();
}; // Size: 0x28
#pragma pack(pop)
