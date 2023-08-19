#include "FCharacterStateData.hpp"
#include "UCharacterStateDataContainer.hpp"
#include "UObjectStateDataContainerBase.hpp"
UCharacterStateDataContainer* UCharacterStateDataContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterStateDataContainer");
    return (UCharacterStateDataContainer*)res;
}
