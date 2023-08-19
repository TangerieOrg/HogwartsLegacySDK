#include "UCentaurAnimInstance.hpp"
#include "UNPC_AnimInstance.hpp"
UCentaurAnimInstance* UCentaurAnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CentaurAnimInstance");
    return (UCentaurAnimInstance*)res;
}
