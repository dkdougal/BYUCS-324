void doit() {
  if (fork() == 0) {
		printf("hello\n");
		if (fork() == 0)
		    printf("hello\n");
		if (fork() > 0)
		    exit(0);
}
	printf(“hello\n”);
}

int main() {
	doit();
	printf("hello\n");
}
