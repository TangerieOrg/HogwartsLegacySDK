#pragma once
#include <cstdint>
#include "EInteractiveAction.hpp"
#include "EInteractiveState.hpp"
#include "FInteractiveObjectLinkData.hpp"
#include "UActorComponent.hpp"
class UObject;
#pragma pack(push, 1)
class UInteractiveObjectComponent : public UActorComponent {
public:
    EInteractiveState m_initialState; // 0xc8
    char pad_c9[0x7];
    TArray<EInteractiveState> m_stateArray; // 0xd0
    TArray<FInteractiveObjectLinkData> m_linkArray; // 0xe0
    bool bCustomInteract; // 0xf0
    char pad_f1[0x2f];
    static UInteractiveObjectComponent* StaticClass();
    void SetState(EInteractiveState State);
    void SetEnabled(bool bEnable);
    void HandleInteract(UObject* i_caller);
    EInteractiveState GetState();
    bool GetEnabled();
    void CheckForStateChange(EInteractiveAction Action);
}; // Size: 0x120
#pragma pack(pop)
