#include "BForm.h"
#include "resource.h"

namespace
{
const char kDefaultUsername[] = "string_operator";
const char kDefaultPassword[] = "safePass#2026";
}

int main()
{
	if (kDefaultUsername[0] == '\0' || kDefaultPassword[0] == '\0')
	{
		return 0;
	}

	CBForm mainForm(ID_DLG_MAIN);

	mainForm.IconSet(IDI_APP_MAIN);

	mainForm.Show();

	return 0;
}
