#include "QuiICDManagerModule.h"
#include "ui_QuiICDManagerModule.h"

CQuiICDManagerModule::CQuiICDManagerModule(QWidget *parent)
    : QWidget(parent)
	,ui(new Ui::QuiICDManagerModuleClass)
{
    ui->setupUi(this);
}
CQuiICDManagerModule::~CQuiICDManagerModule()
{
	
}
std::string CQuiICDManagerModule::GetName() const
{
	return "";
}

std::string CQuiICDManagerModule::GetCompany() const
{
	return "";
}

std::string CQuiICDManagerModule::GetVersion() const
{
	return "";
}

std::string CQuiICDManagerModule::GetDescription() const
{
	return "";
}

bool CQuiICDManagerModule::Initialise()
{
	return true;
}

bool CQuiICDManagerModule::Uninitialise()
{
	return true;
}
IMPLEMENT_MODULE(QuiICDManager)
