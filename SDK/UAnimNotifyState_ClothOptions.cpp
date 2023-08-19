#include "FCharacterPieceType.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_ClothOptions.hpp"
#include "UFloatProvider.hpp"
#include "UIntProvider.hpp"
#include "UVector2DProvider.hpp"
#include "UVectorProvider.hpp"
UAnimNotifyState_ClothOptions* UAnimNotifyState_ClothOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimNotifyState_ClothOptions");
    return (UAnimNotifyState_ClothOptions*)res;
}
