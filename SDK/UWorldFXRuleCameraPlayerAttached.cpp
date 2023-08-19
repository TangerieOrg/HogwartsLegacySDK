#include "FRotator.hpp"
#include "FVector.hpp"
#include "UWorldFXRuleCameraPlayer.hpp"
#include "UWorldFXRuleCameraPlayerAttached.hpp"
UWorldFXRuleCameraPlayerAttached* UWorldFXRuleCameraPlayerAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleCameraPlayerAttached");
    return (UWorldFXRuleCameraPlayerAttached*)res;
}
