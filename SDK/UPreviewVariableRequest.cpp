#include "UInterface.hpp"
#include "UPreviewVariableRequest.hpp"
UPreviewVariableRequest* UPreviewVariableRequest::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PreviewVariableRequest");
    return (UPreviewVariableRequest*)res;
}
