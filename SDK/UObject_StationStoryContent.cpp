#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UObjectProvider.hpp"
#include "UObject_StationStoryContent.hpp"
UObject_StationStoryContent* UObject_StationStoryContent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Object_StationStoryContent");
    return (UObject_StationStoryContent*)res;
}
