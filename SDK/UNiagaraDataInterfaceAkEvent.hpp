#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UNiagaraDataInterfaceAkEvent : public UNiagaraDataInterface {
public:
    UAkAudioEvent* AkAudioEvent; // 0x38
    FName EventName; // 0x40
    FName AttachPointName; // 0x48
    static UNiagaraDataInterfaceAkEvent* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
