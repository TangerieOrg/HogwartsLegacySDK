#include "AInventoryObject.hpp"
#include "AWorldObject.hpp"
#include "EInventoryObjectSpawnType.hpp"
#include "UAkAudioEvent.hpp"
#include "UFunction.hpp"
AInventoryObject* AInventoryObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryObject");
    return (AInventoryObject*)res;
}
void AInventoryObject::SetItemData(FName ItemId, int32_t ItemCount, FName InVariation, bool InIsStolen, bool InIsUnique) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObject.SetItemData"));
    struct Params_SetItemData {
        FName ItemId; // 0x0
        int32_t ItemCount; // 0x8
        FName InVariation; // 0xc
        bool InIsStolen; // 0x14
        bool InIsUnique; // 0x15
    }; // Size: 0x16
    Params_SetItemData params{};
    params.ItemId = (FName)ItemId;
    params.ItemCount = (int32_t)ItemCount;
    params.InVariation = (FName)InVariation;
    params.InIsStolen = (bool)InIsStolen;
    params.InIsUnique = (bool)InIsUnique;
    ProcessEvent(func, &params);
}
void AInventoryObject::OnPickedUpHandlerMulti__DelegateSignature(FName ItemId, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.InventoryObject.OnPickedUpHandlerMulti__DelegateSignature"));
    struct Params_OnPickedUpHandlerMulti__DelegateSignature {
        FName ItemId; // 0x0
        int32_t ItemCount; // 0x8
    }; // Size: 0xc
    Params_OnPickedUpHandlerMulti__DelegateSignature params{};
    params.ItemId = (FName)ItemId;
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void AInventoryObject::AddPickedUpHandler() {}
void AInventoryObject::OnPickedUpHandler__DelegateSignature(FName ItemId, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.InventoryObject.OnPickedUpHandler__DelegateSignature"));
    struct Params_OnPickedUpHandler__DelegateSignature {
        FName ItemId; // 0x0
        int32_t ItemCount; // 0x8
    }; // Size: 0xc
    Params_OnPickedUpHandler__DelegateSignature params{};
    params.ItemId = (FName)ItemId;
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void AInventoryObject::NotifyPickedUp(FName ItemId, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObject.NotifyPickedUp"));
    struct Params_NotifyPickedUp {
        FName ItemId; // 0x0
        int32_t ItemCount; // 0x8
    }; // Size: 0xc
    Params_NotifyPickedUp params{};
    params.ItemId = (FName)ItemId;
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
