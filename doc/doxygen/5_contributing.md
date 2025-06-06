# Contribution Guide {#contribution-guide}

\tableofcontents

\note This contribution guide is adapted from the example guide provided [by GitHub](https://github.com/github/docs/blob/278ce65fe7e7cb7e8432e9f032f94c7fe46c379e/.github/CONTRIBUTING.md). We will continue to refine the information here as needed.

Thank you for investing your time in contributing to the LLZK project!

Before getting involved, read our \subpage code-of-conduct "Code of Conduct" to keep our community approachable and respectable.

In this guide you will get an overview of the contribution workflow from opening an issue, creating a PR, reviewing, and merging the PR.

## Getting started

### Issues

#### Create a new issue

If you spot a problem, encounter a bug, or want to request a new feature, [search if an issue already exists](https://docs.github.com/en/github/searching-for-information-on-github/searching-on-github/searching-issues-and-pull-requests#search-by-the-title-body-or-comments). If a related issue doesn't exist, you can open a new issue using a relevant [issue form](https://github.com/Veridise/llzk-lib/issues/new/choose).

#### Solve an issue

Scan through our [existing issues](https://github.com/Veridise/llzk-lib/issues) to find one that interests you.
You can narrow down the search using `labels` as filters. See ["Label reference"](https://docs.github.com/en/contributing/collaborating-on-github-docs/label-reference) for more information. As a general rule, we don’t assign issues to anyone. If you find an issue to work on, you are welcome to open a PR with a fix.

### Make Changes

1. Fork the repository.
- Using GitHub Desktop:
  - [Getting started with GitHub Desktop](https://docs.github.com/en/desktop/installing-and-configuring-github-desktop/getting-started-with-github-desktop) will guide you through setting up Desktop.
  - Once Desktop is set up, you can use it to [fork the repo](https://docs.github.com/en/desktop/contributing-and-collaborating-using-github-desktop/cloning-and-forking-repositories-from-github-desktop)!

- Using the command line:
  - [Fork the repo](https://docs.github.com/en/github/getting-started-with-github/fork-a-repo#fork-an-example-repository) so that you can make your changes without affecting the original project until you're ready to merge them.

2. Install or update LLZK development dependencies. For more information, see \ref setup "the development guide"

3. Create a working branch and start with your changes!

### Commit your update

Commit the changes once you are happy with them.
Remember that all code must pass a format check before it can be merged, so consider running clang format
before pushing your commits. For more information, see \ref dev-workflow "the development workflow section".

### Pull Request

When you're finished with the changes, create a pull request, also known as a PR.
- All PRs require a changelog describing what user-level changes have been made in the PR. To create a template changelog, run `create-changelog` from the nix shell.
- Don't forget to [link PR to issue](https://docs.github.com/en/issues/tracking-your-work-with-issues/linking-a-pull-request-to-an-issue) if you are solving one.
- Enable the checkbox to [allow maintainer edits](https://docs.github.com/en/github/collaborating-with-issues-and-pull-requests/allowing-changes-to-a-pull-request-branch-created-from-a-fork) so the branch can be updated for a merge.
Once you submit your PR, a maintainer will review your proposal. We may ask questions or request additional information.
- We may ask for changes to be made before a PR can be merged, either using [suggested changes](https://docs.github.com/en/github/collaborating-with-issues-and-pull-requests/incorporating-feedback-in-your-pull-request) or pull request comments.
You can apply suggested changes directly through the UI.
You can make any other changes in your fork, then commit them to your branch.
- As you update your PR and apply changes, mark each conversation as [resolved](https://docs.github.com/en/github/collaborating-with-issues-and-pull-requests/commenting-on-a-pull-request#resolving-conversations).
- If you run into any merge issues, checkout this [git tutorial](https://github.com/skills/resolve-merge-conflicts) to help you resolve merge conflicts and other issues.

### Your PR is merged!

Congratulations! The LLZK team thanks you.

Once your PR is merged, your contributions will be publicly available in the [LLZK-lib repository](https://github.com/Veridise/llzk-lib).

<div class="section_buttons">
| Previous          |                              Next |
|:------------------|----------------------------------:|
| \ref tools | \ref dialects |
</div>