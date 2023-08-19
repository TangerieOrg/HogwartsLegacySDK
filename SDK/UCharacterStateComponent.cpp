#include "FCharacterStateData.hpp"
#include "UBaseStateComponent.hpp"
#include "UCharacterStateComponent.hpp"
UCharacterStateComponent* UCharacterStateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterStateComponent");
    return (UCharacterStateComponent*)res;
}
