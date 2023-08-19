#include "UInterface.hpp"
#include "UPreviewCollectionInterface.hpp"
UPreviewCollectionInterface* UPreviewCollectionInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PreviewCollectionInterface");
    return (UPreviewCollectionInterface*)res;
}
