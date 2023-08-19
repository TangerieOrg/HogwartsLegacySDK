#include "FGameplayTag.hpp"
#include "UDataAsset.hpp"
#include "UGameplayTagLibrary.hpp"
UGameplayTagLibrary* UGameplayTagLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GameplayTagLibrary");
    return (UGameplayTagLibrary*)res;
}
