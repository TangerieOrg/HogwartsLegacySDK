#include "UNavigationDataChunk.hpp"
#include "UObject.hpp"
UNavigationDataChunk* UNavigationDataChunk::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavigationDataChunk");
    return (UNavigationDataChunk*)res;
}
