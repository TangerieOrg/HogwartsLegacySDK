#pragma once
#include <cstdint>
class UAkAudioEvent;
#pragma pack(push, 1)
struct FNiagaraDataInterfaceAkEventInfo {
    UAkAudioEvent* AkAudioEvent; // 0x0
    FName EventName; // 0x8
    FName AttachPointName; // 0x10
}; // Size: 0x18
#pragma pack(pop)
