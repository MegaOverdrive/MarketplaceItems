
void AFileLauncher::RunExec(FText filename, FText arguments, bool bWorkingDirectory, FText WorkingDirectory)
{
	const TCHAR* tFilename = *filename.ToString();
	const TCHAR* tArguments = *arguments.ToString();
	const TCHAR* tWorkingDirectory = (bWorkingDirectory) ? *WorkingDirectory.ToString() : NULL;

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, tFilename);

	FPlatformProcess::CreateProc(tFilename, tArguments, true, false, false, NULL, 0, tWorkingDirectory, NULL);
}