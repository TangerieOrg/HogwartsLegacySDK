#include "AActor.hpp"
#include "ABroomPreviewLocator.hpp"
ABroomPreviewLocator* ABroomPreviewLocator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomPreviewLocator");
    return (ABroomPreviewLocator*)res;
}
