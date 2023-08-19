#include "AActor.hpp"
#include "APortkey_Base.hpp"
#include "APortkey_Object.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
APortkey_Base* APortkey_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Portkey_Base");
    return (APortkey_Base*)res;
}
void APortkey_Base::PortkeyTeleport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey_Base.PortkeyTeleport"));
    struct Params_PortkeyTeleport {
    }; // Size: 0x0
    Params_PortkeyTeleport params{};
    ProcessEvent(func, &params);
}
void APortkey_Base::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey_Base.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
