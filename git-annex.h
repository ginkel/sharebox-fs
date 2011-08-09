/*
 * git-annex.h
 */

int git_annex_unlock(const char *repodir, const char *path);
int git_annex_add(const char *repodir, const char *path);
int git_annex_get(const char *repodir, const char *path);
int git_commit(const char *repodir, const char *message);
int git_rm(const char *repodir, const char *path);
int git_mv(const char *repodir, const char *old, const char *new);
int annexed(const char *repodir, const char *path);
