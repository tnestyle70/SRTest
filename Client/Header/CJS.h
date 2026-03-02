#pragma once
#include "CGameObject.h"
#include "CProtoMgr.h"

class CJS : public CGameObject
{
private:
	explicit CJS(LPDIRECT3DDEVICE9 pGraphicDev);
	explicit CJS(const CJS& rhs);
	virtual ~CJS();

public:
	virtual			HRESULT		Ready_GameObject();
	virtual			_int		Update_GameObject(const _float& fTimeDelta);
	virtual			void		LateUpdate_GameObject(const _float& fTimeDelta);
	virtual			void		Render_GameObject();

private:
	HRESULT			Add_Component();

private:
	Engine::CRcCol* m_pBufferCom;
	Engine::CTransform* m_pTransformCom;

public:
	static CJS* Create(LPDIRECT3DDEVICE9 pGraphicDev);

private:
	virtual void Free();
};