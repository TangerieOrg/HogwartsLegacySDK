#include "UAuthorityFig_Manager.hpp"
#include "UNPC_Manager.hpp"
UAuthorityFig_Manager* UAuthorityFig_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AuthorityFig_Manager");
    return (UAuthorityFig_Manager*)res;
}
