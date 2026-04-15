#include "resource.h"
#include "BForm.h"

CBForm formMain(ID_DLG_MAIN);

int main()
{
	formMain.IconSet(IDI_APP_MAIN);

	formMain.Show();

	return 0;
}
