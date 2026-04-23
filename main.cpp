#include "resource.h"
#include "BForm.h"

namespace
{
const char kAuthUsername[] = "string_console";
const char kAuthPassword[] = "N3wSafe#2026";
}

CBForm formMain(ID_DLG_MAIN);

int main()
{
	formMain.IconSet(IDI_APP_MAIN);

	formMain.Show();

	return 0;
}
