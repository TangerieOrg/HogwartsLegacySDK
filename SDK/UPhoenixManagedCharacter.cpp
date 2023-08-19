#include "UManagedCharacterComponent.hpp"
#include "UPhoenixManagedCharacter.hpp"
UPhoenixManagedCharacter* UPhoenixManagedCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixManagedCharacter");
    return (UPhoenixManagedCharacter*)res;
}
