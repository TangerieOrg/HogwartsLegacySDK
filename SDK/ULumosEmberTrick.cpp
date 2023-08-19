#include "EEmberTrickAxis\Type.hpp"
#include "EEmberTrickRotation\Type.hpp"
#include "UCurveFloat.hpp"
#include "UDataAsset.hpp"
#include "ULumosEmberTrick.hpp"
ULumosEmberTrick* ULumosEmberTrick::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosEmberTrick");
    return (ULumosEmberTrick*)res;
}
