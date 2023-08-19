#include "AActor.hpp"
#include "APickupTool.hpp"
#include "APortkey_Base.hpp"
#include "APortkey_Object.hpp"
#include "UFunction.hpp"
#include "UStaticMesh.hpp"
APortkey_Object* APortkey_Object::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Portkey_Object");
    return (APortkey_Object*)res;
}
void APortkey_Object::EndTeleport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey_Object.EndTeleport"));
    struct Params_EndTeleport {
    }; // Size: 0x0
    Params_EndTeleport params{};
    ProcessEvent(func, &params);
}
