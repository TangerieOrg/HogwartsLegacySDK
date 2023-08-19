#include "UCallOutAttachmentInterface.hpp"
#include "UInterface.hpp"
UCallOutAttachmentInterface* UCallOutAttachmentInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CallOutAttachmentInterface");
    return (UCallOutAttachmentInterface*)res;
}
