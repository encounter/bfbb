#ifndef XJSP_H
#define XJSP_H

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>
#include "xClumpColl.h"

struct xJSPNodeInfo
{
    int32 originalMatIndex;
    int32 nodeFlags;
};

struct xJSPHeader
{
    int8 idtag[4];
    uint32 version;
    uint32 jspNodeCount;
    RpClump* clump;
    xClumpCollBSPTree* colltree;
    xJSPNodeInfo* jspNodeList;
};

RpMesh* AddMeshCB(RpMesh* mesh, RpMeshHeader* header, RwV3d** param_3);
void xJSP_MultiStreamRead(void* data, uint32 size, xJSPHeader** jsp);

#endif