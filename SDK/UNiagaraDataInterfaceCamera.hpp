#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface {
public:
    int32_t PlayerControllerIndex; // 0x38
    bool bRequireCurrentFrameData; // 0x3c
    char pad_3d[0x3];
    static UNiagaraDataInterfaceCamera* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
