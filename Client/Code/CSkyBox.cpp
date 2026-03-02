#include "pch.h"
#include "CSkyBox.h"

CSkyBox::CSkyBox(LPDIRECT3DDEVICE9 pGraphicDev)
	: CGameObject(pGraphicDev)
{
}

CSkyBox::CSkyBox(const CGameObject& rhs)
	: CGameObject(rhs)
{
}

CSkyBox::~CSkyBox()
{
}

HRESULT CSkyBox::Ready_GameObject()
{
	

	return S_OK;
}

_int CSkyBox::Update_GameObject(const _float& fTimeDelta)
{
	

	return 0;
}

void CSkyBox::LateUpdate_GameObject(const _float& fTimeDelta)
{
	
}

void CSkyBox::Render_GameObject()
{
	
}

HRESULT CSkyBox::Add_Component()
{
	

	return S_OK;
}

CSkyBox* CSkyBox::Create(LPDIRECT3DDEVICE9 pGraphicDev)
{
	

	return 0;
}

void CSkyBox::Free()
{
	
}
