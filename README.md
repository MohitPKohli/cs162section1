MAX SUX
Mohit is also cool

# Section 1

### make

* Poll: have you used make before? Do you like using it? Why or why not?
* Rules are made up of a target, dependencies, and a recipe
* The first rule is the default rule
* Implicit rules (filenames)
* Demo: kitchen
* Demo: irl

### git

* Poll: have you used git before? Do you like using it? Why or why not?
* Best way to learn: use it!
* Now for an activity. Goals: get comfortable collaborating on git and using Github.
* If you already feel comfortable with git, this is your chance to pass on what you know!

#### instructions

1. Find a partner. If you feel comfortable with git, find someone who isn't comfortable with git, and vice versa.
1. Person 1 goes to https://github.com/ayng/dolly and click 'fork' (on the top right). Then person 1 adds person 2 as a collaborator (Settings > Collaborators). You both now have push access to your forked repository.
1. Both clones from your newly forked Github repo to your local machines.

    ```
    $ git clone ...
    ```

1. Person 1 adds their message to README.md, then adds, commits and pushes.

    ```
    $ nano README.md # nano is just a basic text editor; if you prefer another one, feel free to use it instead
    $ git add README.md
    $ git commit -m "YOUR-MSG-HERE-IN-QUOTES"
    $ git push origin master
    ```
    
    Tip: in between every command, type `git status` to see git's internal representation. If you ever forget what command comes next, `git status` will remind you!

1. Person 2 pulls, then does the same thing as Person 1 in the previous step.

    ```
    $ git pull origin master
    $ # see previous instruction
    ```

1. (Optional) Person 1 can try to push another change.
1. Person 1 pulls from the Github repo.
    
    ```
    $ git pull origin master
    ```
    
    There may be a merge conflict! If you don't know how to resolve it, let me know
    Persons 1 and 2 are now on the latest version of the repo.

1. Ensure that the logs are up to date.
    
    ```
    $ git log
    ```
    
1. Explore! Here are some ideas:

    ```
    $ git reflog
    $ git show 123abc
    $ git checkout 123abc
    $ git diff
    ```

If you're bored, you probably know your way around git. Here are some advanced exercises to try.

1. Create a branch, make commits on it, and merge those commits back to the master branch.
1. [Learn](https://www.atlassian.com/git/tutorials/undoing-changes/git-revert) about the `reset` and `revert` command.

### gdb

* Poll: have you used gdb before?
* Demo: hw0
* Demo: pintos

```
    pintos --gdb -v -k -T 60 --bochs -- -q run alarm-multiple
```
